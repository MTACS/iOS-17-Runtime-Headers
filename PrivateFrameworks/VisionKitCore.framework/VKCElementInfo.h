
@interface VKCElementInfo : VKCBaseElement {
    NSString * _text;
}

@property (nonatomic, retain) NSString *text;

+ (id)infoWithText:(id)arg1 parent:(id)arg2;

- (void).cxx_destruct;
- (id)children;
- (void)setText:(id)arg1;
- (id)stringValue;
- (id)text;

@end
