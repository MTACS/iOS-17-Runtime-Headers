
@interface _MPMediaLibraryEntityChange : NSObject {
    NSString * _anchor;
    long long  _deletionType;
    MPMediaEntity * _entity;
}

@property (nonatomic, readonly, copy) NSString *anchor;
@property (nonatomic, readonly) long long deletionType;
@property (nonatomic, readonly) MPMediaEntity *entity;

- (void).cxx_destruct;
- (id)anchor;
- (long long)deletionType;
- (id)entity;
- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(long long)arg3;

@end
