
@interface SearchUISearchWebHandler : SearchUIOpenPunchoutHandler

@property (readonly) SFSearchWebCommand *command;

+ (id)webSearchURLForQueryString:(id)arg1;

- (id)destinationPunchout;

@end
