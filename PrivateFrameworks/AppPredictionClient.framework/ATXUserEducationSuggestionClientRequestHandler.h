
@interface ATXUserEducationSuggestionClientRequestHandler : NSObject <ATXUserEducationSuggestionClientXPCInterface> {
    ATXUserEducationSuggestionClient * _client;
}

- (void).cxx_destruct;
- (void)didReceiveUserEducationSuggestionEvent:(id)arg1;
- (id)init;
- (id)initWithClient:(id)arg1;

@end
