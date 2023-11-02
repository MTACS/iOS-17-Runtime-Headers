
@interface ICMusicRestoreRequestParameters : NSObject {
    NSNumber * _accountID;
    NSNumber * _adamID;
    NSString * _flavor;
    NSNumber * _matchStatus;
    NSString * _mediaKind;
    NSString * _storeFrontID;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSNumber *accountID;
@property (nonatomic, readonly, copy) NSNumber *adamID;
@property (nonatomic, readonly, copy) NSString *flavor;
@property (nonatomic, readonly, copy) NSNumber *matchStatus;
@property (nonatomic, readonly, copy) NSString *mediaKind;
@property (nonatomic, readonly, copy) NSString *storeFrontID;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)accountID;
- (id)adamID;
- (id)flavor;
- (id)initWithItemID:(id)arg1 title:(id)arg2 storeFrontID:(id)arg3 mediaKind:(id)arg4 accountID:(id)arg5 matchStatus:(id)arg6 flavor:(id)arg7;
- (id)matchStatus;
- (id)mediaKind;
- (id)storeFrontID;
- (id)title;

@end
