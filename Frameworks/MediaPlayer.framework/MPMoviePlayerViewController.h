
@interface MPMoviePlayerViewController : UIViewController {
    MPMoviePlayerController * _moviePlayer;
}

@property (nonatomic, readonly) MPMoviePlayerController *moviePlayer;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)moviePlayer;

@end
