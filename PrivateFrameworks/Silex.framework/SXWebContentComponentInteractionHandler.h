
@interface SXWebContentComponentInteractionHandler : NSObject <SXComponentInteractionHandler> {
    <SWInteraction> * _interaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWInteraction> *interaction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithInteraction:(id)arg1;
- (id)interaction;

@end
