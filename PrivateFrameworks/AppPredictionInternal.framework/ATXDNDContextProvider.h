
@interface ATXDNDContextProvider : NSObject {
    ATXCoreDuetContextHelper * _coreDuetContextHelper;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContextHelper:(id)arg1;
- (id)latestDNDTransition;

@end
