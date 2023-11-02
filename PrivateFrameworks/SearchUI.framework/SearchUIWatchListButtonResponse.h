
@interface SearchUIWatchListButtonResponse : NSObject {
    NSArray * _buttonModels;
    NSError * _error;
    SearchUIWatchListState * _state;
}

@property (retain) NSArray *buttonModels;
@property (retain) NSError *error;
@property (retain) SearchUIWatchListState *state;

- (void).cxx_destruct;
- (id)buttonModels;
- (id)error;
- (void)setButtonModels:(id)arg1;
- (void)setError:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
