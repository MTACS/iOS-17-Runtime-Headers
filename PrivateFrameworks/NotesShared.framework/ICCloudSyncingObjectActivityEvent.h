
@interface ICCloudSyncingObjectActivityEvent : NSObject <ICCRCoding, ICCRDataType> {
    NSData * _data;
    NSData * _fallbackData;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *fallbackData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerWithICCRCoder;

- (void).cxx_destruct;
- (id)data;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)fallbackData;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 fallbackData:(id)arg2;
- (id)initWithICCRCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
