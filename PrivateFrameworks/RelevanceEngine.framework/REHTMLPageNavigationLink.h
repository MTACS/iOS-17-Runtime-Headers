
@interface REHTMLPageNavigationLink : NSObject {
    NSString * _location;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)initWithLocation:(id)arg1 title:(id)arg2;
- (id)location;
- (id)title;

@end
