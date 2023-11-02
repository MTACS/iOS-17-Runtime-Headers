
@interface HSAuthorizedDSIDsUpdatesResponse : HSResponse {
    NSArray * authorizedDSIDs;
}

@property (nonatomic, copy) NSArray *authorizedDSIDs;

- (void).cxx_destruct;
- (id)authorizedDSIDs;
- (void)setAuthorizedDSIDs:(id)arg1;

@end
