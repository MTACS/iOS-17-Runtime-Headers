
@interface HDMobilityDefaultIsAgePresentProvider : NSObject <HDMobilityIsAgePresentProvider> {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (id)isAgePresentWithError:(id*)arg1;

@end
