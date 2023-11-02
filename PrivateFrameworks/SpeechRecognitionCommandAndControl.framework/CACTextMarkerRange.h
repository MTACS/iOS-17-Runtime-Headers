
@interface CACTextMarkerRange : NSObject {
    CACTextMarker * _endMarker;
    CACTextMarker * _startMarker;
}

@property (nonatomic, readonly) CACTextMarker *endMarker;
@property (nonatomic, readonly) CACTextMarker *startMarker;

+ (id)markerRangeWithArray:(id)arg1;
+ (id)markerRangeWithNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2;
+ (id)markerRangeWithStartMarker:(id)arg1 endMarker:(id)arg2 forTextElement:(id)arg3;

- (void).cxx_destruct;
- (id)array;
- (bool)containsMarker:(id)arg1;
- (bool)containsRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endMarker;
- (unsigned long long)hash;
- (id)initWithStartMarker:(id)arg1 endMarker:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nsRange;
- (id)startMarker;

@end
