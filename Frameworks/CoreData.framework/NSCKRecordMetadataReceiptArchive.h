
@interface NSCKRecordMetadataReceiptArchive : NSObject <NSSecureCoding> {
    NSMutableDictionary * _zoneIDToArchivedReceipts;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateArchivedRecordIDsUsingBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReceiptsToEncode:(id)arg1;

@end
