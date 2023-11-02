
@interface NFCNDEFMessage : NSObject <NSSecureCoding> {
    NSArray * _records;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, copy) NSArray *records;

+ (id)_getPayloadsFromNDEFRecords:(id)arg1;
+ (bool)_validateRecords:(id)arg1 fromOriginal:(id)arg2;
+ (id)ndefMessageWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_getURLsFromNDEFMessage:(id)arg1;
- (id)_initWithRecords:(id)arg1;
- (id)asData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmptyNdefMessage;
- (id)initWithNDEFRecords:(id)arg1;
- (id)initWithNFNdefMessage:(id)arg1;
- (unsigned long long)length;
- (id)records;
- (void)setRecords:(id)arg1;

@end
