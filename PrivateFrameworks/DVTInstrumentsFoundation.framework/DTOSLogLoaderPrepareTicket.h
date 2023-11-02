
@interface DTOSLogLoaderPrepareTicket : DTOSLogLoaderTicket {
    DTOSLogLoaderConfiguration * _configuration;
}

@property (nonatomic, retain) DTOSLogLoaderConfiguration *configuration;

- (void).cxx_destruct;
- (void)_setupLoaderForLoggedEventStore:(id)arg1 agent:(id)arg2 setDatesBasedOnSource:(bool)arg3 genericFailureReason:(id)arg4;
- (id)configuration;
- (void)holdAgent:(id)arg1 loader:(id)arg2;
- (void)setConfiguration:(id)arg1;

@end
