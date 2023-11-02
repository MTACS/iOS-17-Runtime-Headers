
@interface SSDialogButton : NSObject {
    NSDictionary * _actionDictionary;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *URLTarget;
@property (nonatomic, readonly) id actionParameter;
@property (nonatomic, readonly) NSString *buttonAction;
@property (nonatomic, readonly, copy) NSString *buttonTitle;

+ (id)buttonWithTitle:(id)arg1;

- (id)URLTarget;
- (id)actionParameter;
- (id)buttonAction;
- (id)buttonTitle;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1 actionDictionary:(id)arg2;
- (id)valueForActionProperty:(id)arg1;

@end
