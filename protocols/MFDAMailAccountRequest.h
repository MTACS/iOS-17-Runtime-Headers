
@protocol MFDAMailAccountRequest

@required

- (unsigned long long)generationNumber;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
