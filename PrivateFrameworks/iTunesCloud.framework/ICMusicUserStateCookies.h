
@interface ICMusicUserStateCookies : NSObject <ICMutableMusicUserStateCookies, NSCopying, NSSecureCoding> {
    bool  _frozen;
    NSString * _itfe;
    NSString * _xpab;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *itfe;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *xpab;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFrozen;
- (id)itfe;
- (void)setFrozen:(bool)arg1;
- (void)setItfe:(id)arg1;
- (void)setXpab:(id)arg1;
- (id)xpab;

@end
