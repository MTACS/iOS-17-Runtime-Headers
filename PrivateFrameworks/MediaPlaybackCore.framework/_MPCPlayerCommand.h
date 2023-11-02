
@interface _MPCPlayerCommand : NSObject {
    MPCPlayerPath * _playerPath;
    MPCPlayerResponse * _response;
}

@property (nonatomic, readonly, copy) MPCPlayerPath *playerPath;
@property (nonatomic, readonly) MPCPlayerResponse *response;

- (void).cxx_destruct;
- (id)initWithPlayerPath:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)playerPath;
- (id)response;

@end
