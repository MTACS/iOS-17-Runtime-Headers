
@interface SearchUINowPlayingSingleMovieCard : TLKStackView {
    SFPunchout * _punchout;
}

@property (nonatomic, retain) SFPunchout *punchout;

- (void).cxx_destruct;
- (id)initWithMovie:(id)arg1;
- (id)punchout;
- (void)setPunchout:(id)arg1;
- (void)tapOnMovie:(id)arg1;

@end
