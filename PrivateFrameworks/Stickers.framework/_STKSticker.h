
@interface _STKSticker : NSObject {
    void accessibilityName;
    void attributionInfo;
    void effectType;
    void externalURI;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void metadata;
    void name;
    void representations;
}

@property (nonatomic, readonly) NSString *accessibilityName;
@property (nonatomic, readonly) _STKStickerAttributionInfo *attributionInfo;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long effectType;
@property (nonatomic, readonly) NSString *externalURI;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *representations;

- (void).cxx_destruct;
- (id)accessibilityName;
- (id)attributionInfo;
- (id)description;
- (long long)effectType;
- (id)externalURI;
- (id)identifier;
- (id)init;
- (id)metadata;
- (id)name;
- (id)representations;

@end
