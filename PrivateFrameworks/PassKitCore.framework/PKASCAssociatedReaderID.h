
@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding> {
    unsigned long long  _priority;
    PKASCAssociatedReaderIDReaderCA * _readerCA;
    NSData * _readerID;
}

@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) PKASCAssociatedReaderIDReaderCA *readerCA;
@property (nonatomic, retain) NSData *readerID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToASCAssociatedReaderID:(id)arg1;
- (unsigned long long)priority;
- (id)readerCA;
- (id)readerID;
- (void)setPriority:(unsigned long long)arg1;
- (void)setReaderCA:(id)arg1;
- (void)setReaderID:(id)arg1;

@end
