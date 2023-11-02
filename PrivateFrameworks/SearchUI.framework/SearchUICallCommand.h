
@interface SearchUICallCommand : SFCallCommand {
    TUDialRequest * _dialRequest;
}

@property (nonatomic, retain) TUDialRequest *dialRequest;

- (void).cxx_destruct;
- (id)dialRequest;
- (void)setDialRequest:(id)arg1;

@end
