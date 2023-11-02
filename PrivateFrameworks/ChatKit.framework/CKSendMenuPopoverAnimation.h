
@interface CKSendMenuPopoverAnimation : NSObject {
    NSArray * _animators;
    id /* block */  _completion;
    NSObject<OS_dispatch_group> * _group;
}

@property (nonatomic, copy) NSArray *animators;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;

- (void).cxx_destruct;
- (void)addCompletion:(id /* block */)arg1;
- (id)animators;
- (id /* block */)completion;
- (id)group;
- (id)initWithAnimators:(id)arg1;
- (void)setAnimators:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setGroup:(id)arg1;
- (void)startAnimation;

@end
