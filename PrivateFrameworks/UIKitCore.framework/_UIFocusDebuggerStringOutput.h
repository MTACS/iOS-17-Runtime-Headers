
@interface _UIFocusDebuggerStringOutput : NSObject <UIFocusDebuggerOutput> {
    NSString * _outputString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)outputWithString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithString:(id)arg1;

@end
