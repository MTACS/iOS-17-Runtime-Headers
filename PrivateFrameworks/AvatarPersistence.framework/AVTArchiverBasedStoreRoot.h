
@interface AVTArchiverBasedStoreRoot : NSObject <NSSecureCoding> {
    NSArray * _domains;
    NSArray * _records;
}

@property (nonatomic, readonly, copy) NSArray *domains;
@property (nonatomic, readonly, copy) NSArray *records;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomains:(id)arg1 records:(id)arg2;
- (id)records;

@end
