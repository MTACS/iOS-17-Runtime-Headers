
@interface CDMVocEntryMetadata : NSObject {
    NSString * _text;
}

@property (nonatomic, readonly) NSString *text;

+ (id)fromText:(id)arg1;

- (void).cxx_destruct;
- (id)initWithText:(id)arg1;
- (id)text;

@end
