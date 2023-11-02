
@interface GEOComposedStringStyleReplacementResult : NSObject {
    NSDictionary * attributes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  range;
    NSString * string;
    NSString * token;
    int  type;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)attributes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)string;
- (id)token;
- (int)type;

@end
