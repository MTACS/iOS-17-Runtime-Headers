
@interface SROSmartRepliesActionMetadata : NSObject {
    _TtC12SmartReplies28SRSmartRepliesActionMetadata * _underlyingMetadata;
}

@property (nonatomic, readonly, copy) NSString *attribution;
@property (nonatomic, readonly) unsigned long long attributionSource;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) bool hasRichActionType;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly) double locationLatitude;
@property (nonatomic, readonly) double locationLongitude;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)attribution;
- (unsigned long long)attributionSource;
- (id)date;
- (bool)hasRichActionType;
- (id)imageName;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2 attribution:(id)arg3 stringRepresentation:(id)arg4 date:(id)arg5 hasRichActionType:(bool)arg6 url:(id)arg7 locationLatitude:(double)arg8 locationLongitude:(double)arg9 imageName:(id)arg10 attributionSource:(unsigned long long)arg11;
- (double)locationLatitude;
- (double)locationLongitude;
- (id)stringRepresentation;
- (id)title;
- (unsigned long long)type;
- (id)url;

@end
