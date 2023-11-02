
@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding> {
    NSString * _entityName;
    NSInputStream * _inputStream;
    NSArray * _objectsToInsert;
    unsigned long long  _resultType;
    bool  _secure;
}

@property (nonatomic, readonly, retain) NSString *entityName;
@property (nonatomic, readonly, retain) NSInputStream *inputStream;
@property (nonatomic, readonly, retain) NSArray *objectsToInsert;
@property (nonatomic, readonly) unsigned long long resultType;
@property (nonatomic, readonly) bool secure;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)inputStream;
- (id)objectsToInsert;
- (unsigned long long)resultType;
- (bool)secure;

@end
