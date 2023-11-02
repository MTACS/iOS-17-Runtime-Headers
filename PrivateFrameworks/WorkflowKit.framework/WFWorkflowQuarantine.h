
@interface WFWorkflowQuarantine : NSObject <NSCopying> {
    NSDate * _importDate;
    NSString * _sourceAppIdentifier;
}

@property (nonatomic, readonly) NSDate *importDate;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)importDate;
- (id)initWithSerializedData:(id)arg1;
- (id)initWithSourceAppIdentifier:(id)arg1 importDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)serializedData;
- (id)serializedRepresentation;
- (id)sourceAppIdentifier;

@end
