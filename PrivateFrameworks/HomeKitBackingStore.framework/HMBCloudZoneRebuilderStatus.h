
@interface HMBCloudZoneRebuilderStatus : HMFObject <HMBModelObjectCoder, NSCopying> {
    long long  _keyStatus;
    NSString * _message;
    unsigned long long  _rebuildState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long keyStatus;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) unsigned long long rebuildState;
@property (readonly) Class superclass;

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;
+ (id)keyStatusString:(long long)arg1;
+ (id)rebuilderStateString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithState:(unsigned long long)arg1 message:(id)arg2;
- (long long)keyStatus;
- (id)message;
- (unsigned long long)rebuildState;

@end
