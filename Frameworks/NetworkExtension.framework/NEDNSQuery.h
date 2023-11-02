
@interface NEDNSQuery : NSObject {
    NSData * _answerData;
    unsigned int  _answerTTL;
    NSString * _name;
    long long  _recordClass;
    long long  _recordType;
}

@property (copy) NSData *answerData;
@property unsigned int answerTTL;
@property (readonly) NSString *name;
@property (readonly) long long recordClass;
@property (readonly) long long recordType;

- (void).cxx_destruct;
- (id)answerData;
- (unsigned int)answerTTL;
- (id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3;
- (id)name;
- (long long)recordClass;
- (long long)recordType;
- (void)setAnswerData:(id)arg1;
- (void)setAnswerTTL:(unsigned int)arg1;

@end
