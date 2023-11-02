
@interface DOMCounter : DOMObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *listStyle;
@property (readonly, copy) NSString *separator;

- (void)dealloc;
- (id)identifier;
- (id)listStyle;
- (id)separator;

@end
