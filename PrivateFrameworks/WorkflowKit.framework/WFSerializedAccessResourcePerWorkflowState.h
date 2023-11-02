
@interface WFSerializedAccessResourcePerWorkflowState : NSObject {
    NSData * _data;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
