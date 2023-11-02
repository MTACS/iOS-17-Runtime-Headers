
@interface GEOComposedStringTokenReplacementResult : NSObject <NSCopying> {
    NSAttributedString * attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  range;
    NSString * string;
    bool  success;
    int  type;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)string;
- (bool)success;
- (int)type;

@end
