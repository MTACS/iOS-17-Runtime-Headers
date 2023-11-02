
@interface MMDocument : NSObject {
    NSMutableArray * _elements;
    NSString * _markdown;
}

@property (nonatomic, copy) NSArray *elements;
@property (nonatomic, readonly, copy) NSString *markdown;

+ (id)documentWithMarkdown:(id)arg1;

- (void).cxx_destruct;
- (void)addElement:(id)arg1;
- (id)elements;
- (id)initWithMarkdown:(id)arg1;
- (id)markdown;
- (void)setElements:(id)arg1;

@end
