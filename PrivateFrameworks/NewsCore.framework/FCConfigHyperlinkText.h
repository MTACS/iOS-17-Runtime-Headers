
@interface FCConfigHyperlinkText : NSObject {
    NSArray * _links;
    NSString * _text;
}

@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithText:(id)arg1 links:(id)arg2;
- (id)links;
- (id)text;

@end
