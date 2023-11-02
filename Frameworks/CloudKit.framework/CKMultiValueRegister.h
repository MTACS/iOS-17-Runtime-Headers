
@interface CKMultiValueRegister : NSObject <CKPropertiesDescription> {
    NSUUID * _identifier;
    NSMutableDictionary * _timestampToContents;
    CKDistributedTimestampStateVector * _vector;
}

@property (nonatomic, copy) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isConsumedState;
@property (nonatomic, readonly) unsigned long long nextClockValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *timestampToContents;
@property (nonatomic, readonly) CKDistributedTimestampStateVector *vector;

+ (id)placeholderIdentifier;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)contents;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 vector:(id)arg2;
- (id)initWithIdentifier:(id)arg1 vector:(id)arg2 contents:(id)arg3 error:(id*)arg4;
- (bool)isConsumedState;
- (bool)isEqual:(id)arg1;
- (bool)merge:(id)arg1 error:(id*)arg2;
- (unsigned long long)nextClockValue;
- (id)redactedDescription;
- (unsigned long long)replaceVectorStateForPresentOrTombstonedTimestamps:(unsigned char)arg1;
- (void)setContents:(id)arg1;
- (id)siteIdentifier;
- (id)timestampToContents;
- (id)vector;

@end
