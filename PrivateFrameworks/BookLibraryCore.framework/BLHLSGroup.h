
@interface BLHLSGroup : NSObject {
    NSString * _groupID;
    NSArray * _media;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSArray *media;

- (void).cxx_destruct;
- (id)description;
- (id)groupID;
- (id)initWithGroupID:(id)arg1 media:(id)arg2;
- (id)media;

@end
