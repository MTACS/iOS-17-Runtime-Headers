
@interface NSFileProviderDiagnosticAttributesDescriptor : NSObject <NSSecureCoding> {
    NSDictionary * _diagnosticAttributes;
    unsigned int  _docID;
    NSError * _error;
    unsigned long long  _fileID;
    NSString * _itemID;
}

@property (nonatomic, retain) NSDictionary *diagnosticAttributes;
@property (nonatomic, readonly) unsigned int docID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) unsigned long long fileID;
@property (nonatomic, readonly) NSString *itemID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)diagnosticAttributes;
- (unsigned int)docID;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)fileID;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocID:(unsigned int)arg1;
- (id)initWithFileID:(unsigned long long)arg1;
- (id)initWithItemID:(id)arg1;
- (id)itemID;
- (void)setDiagnosticAttributes:(id)arg1;
- (void)setError:(id)arg1;

@end
