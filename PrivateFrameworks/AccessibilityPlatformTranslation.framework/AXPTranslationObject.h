
@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bridgeDelegateToken;
    bool  _didPopuldateAppInfo;
    bool  _isApplicationElement;
    unsigned long long  _objectID;
    int  _pid;
    NSData * _rawElementData;
    NSString * _remoteDebugDescription;
    id /* block */  _remoteDescriptionBlock;
}

@property (nonatomic, copy) NSString *bridgeDelegateToken;
@property (nonatomic) bool didPopuldateAppInfo;
@property (nonatomic) bool isApplicationElement;
@property (nonatomic) unsigned long long objectID;
@property (nonatomic) int pid;
@property (nonatomic, copy) NSData *rawElementData;
@property (nonatomic, copy) NSString *remoteDebugDescription;
@property (nonatomic, copy) id /* block */ remoteDescriptionBlock;

+ (id)allowedDecodableClasses;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bridgeDelegateToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didPopuldateAppInfo;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isApplicationElement;
- (bool)isEqual:(id)arg1;
- (unsigned long long)objectID;
- (int)pid;
- (id)rawElementData;
- (id)remoteDebugDescription;
- (id /* block */)remoteDescriptionBlock;
- (void)setBridgeDelegateToken:(id)arg1;
- (void)setDidPopuldateAppInfo:(bool)arg1;
- (void)setIsApplicationElement:(bool)arg1;
- (void)setObjectID:(unsigned long long)arg1;
- (void)setPid:(int)arg1;
- (void)setRawElementData:(id)arg1;
- (void)setRemoteDebugDescription:(id)arg1;
- (void)setRemoteDescriptionBlock:(id /* block */)arg1;

@end
