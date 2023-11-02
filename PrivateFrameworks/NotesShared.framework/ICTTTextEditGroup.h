
@interface ICTTTextEditGroup : NSObject <NSCopying> {
    NSArray * _edits;
    NSDate * _latestTimestamp;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _userID;
}

@property (nonatomic, readonly) NSArray *edits;
@property (nonatomic, readonly, copy) NSDate *latestTimestamp;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly, copy) NSString *userID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)edits;
- (unsigned long long)hash;
- (id)initWithEdits:(id)arg1 latestTimestamp:(id)arg2 userID:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (bool)isEqual:(id)arg1;
- (id)latestTimestamp;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)userID;

@end
