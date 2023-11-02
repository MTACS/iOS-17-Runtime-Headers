
@interface SUCoreEventReporterDelegate : NSObject <NSURLSessionDelegate> {
    SUCoreEventReporter * _reporter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SUCoreEventReporter *reporter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)initWithReporter:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;

@end
