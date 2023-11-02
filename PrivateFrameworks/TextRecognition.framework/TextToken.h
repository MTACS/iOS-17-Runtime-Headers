
@interface TextToken : NSObject {
    NSArray * _features;
    unsigned long long  _properties;
    double  _score;
    NSString * _string;
    int  _wordID;
}

@property (readonly) NSArray *features;
@property (nonatomic, readonly) unsigned long long properties;
@property (readonly) double score;
@property (readonly) NSString *string;
@property (readonly) int wordID;

- (void).cxx_destruct;
- (id)features;
- (id)initWithString:(id)arg1 score:(double)arg2 features:(id)arg3 wordID:(int)arg4 properties:(unsigned long long)arg5;
- (unsigned long long)properties;
- (double)score;
- (id)string;
- (int)wordID;

@end
