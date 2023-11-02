
@interface FMDVolatileMetaDataRecord : NSObject <FMDDictionaryRepresentable, NSSecureCoding> {
    NSDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendMetaData:(id)arg1;
- (id)dictionary;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)serialQueue;
- (void)setDictionary:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
