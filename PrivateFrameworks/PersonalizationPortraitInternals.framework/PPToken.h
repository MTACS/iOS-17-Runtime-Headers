
@interface PPToken : NSObject {
    NSString * _tag;
    NSString * _text;
}

@property (nonatomic, readonly) NSString *tag;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)initWithText:(id)arg1 tag:(id)arg2;
- (id)tag;
- (id)text;

@end
