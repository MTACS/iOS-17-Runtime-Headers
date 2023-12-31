
@interface ICNotePasteboardData : NSObject <NSSecureCoding> {
    NSData * _attributedStringData;
    ICDataPersister * _dataPersister;
}

@property (nonatomic, readonly) NSData *attributedStringData;
@property (nonatomic, readonly) ICDataPersister *dataPersister;

+ (id)pasteboardDataFromPersistenceData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedStringData;
- (id)dataPersister;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)persistenceData;

@end
