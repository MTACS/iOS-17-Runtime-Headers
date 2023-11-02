
@interface PKTray : NSObject <NSSecureCoding> {
    NSDictionary * _trayDict;
}

@property (readonly) bool isEmpty;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *name;
@property (retain) NSDictionary *trayDict;

+ (id)filter:(id)arg1 withBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id)trayWithString:(id)arg1 andMediaSource:(id)arg2;
+ (id)traysWithMediaSourceSupported:(id)arg1 printerInputTrays:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 andMediaSource:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)mediaName;
- (id)name;
- (void)setTrayDict:(id)arg1;
- (id)trayDict;

@end
