
@interface MKThreadContext : NSObject {
    long long  _CA_disableActionsCounter;
}

+ (id)currentContext;

- (void)_CA_setDisableActions:(bool)arg1;

@end
