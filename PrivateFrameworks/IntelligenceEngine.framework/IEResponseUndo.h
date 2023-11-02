
@interface IEResponseUndo : NSObject {
    NSString * _identifier;
    NSDictionary * _userData;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDictionary *userData;

- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
