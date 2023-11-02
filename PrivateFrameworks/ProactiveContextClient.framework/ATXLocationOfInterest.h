
@interface ATXLocationOfInterest : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    NSString * _city;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    long long  _type;
    NSUUID * _uuid;
    NSArray * _visits;
}

@property (nonatomic, readonly) NSString *city;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSArray *visits;

// Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)city;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3 type:(long long)arg4;
- (id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3 type:(long long)arg4 city:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (long long)type;
- (id)uuid;
- (id)visits;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (int)_protoLOITypeFromRoutineLOIType:(long long)arg1;
- (long long)_routineLOITypeFromProtoLOIType:(int)arg1;
- (id)encodeAsProto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)proto;

@end
