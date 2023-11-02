
@interface NFAppletExtraInfo : NSObject {
    NFApplet * _applet;
    NSData * _obgk;
    NSData * _ssdAID;
}

@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) NSData *obgk;
@property (nonatomic, readonly) NSData *ssdAID;

+ (id)infoWithDictionary:(id)arg1 applet:(id)arg2;

- (void).cxx_destruct;
- (id)applet;
- (id)debugDescription;
- (id)obgk;
- (id)ssdAID;

@end
