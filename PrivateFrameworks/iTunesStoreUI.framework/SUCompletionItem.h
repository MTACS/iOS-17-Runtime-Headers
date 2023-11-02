
@interface SUCompletionItem : NSObject {
    NSString * _alternateTitle;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *alternateTitle;
@property (nonatomic, readonly) NSString *title;

- (id)URL;
- (id)alternateTitle;
- (void)dealloc;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)title;

@end
