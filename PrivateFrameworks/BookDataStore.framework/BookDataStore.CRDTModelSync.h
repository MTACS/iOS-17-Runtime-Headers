
@interface BookDataStore.CRDTModelSync : BCMutableCloudData <BCCloudData> {
    void protoData;
    void type;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)identifier;
- (id)init;
- (id)initWithCloudData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)recordType;
- (id)zoneName;

@end
