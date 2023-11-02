
@interface DUFoundInEventClientAbstractResult : NSObject <NSCopying, NSSecureCoding> {
    bool  _detectedEventPolarity;
    NSString * _endAddress;
    NSDictionary * _endAddressComponents;
    NSError * _endAddressError;
    NSString * _endDate;
    NSError * _endDateError;
    NSString * _endPlace;
    NSError * _endPlaceError;
    NSString * _guestName;
    NSError * _guestNameError;
    NSString * _hotelName;
    NSError * _hotelNameError;
    NSString * _movieName;
    NSError * _movieNameError;
    NSString * _reservationId;
    NSError * _reservationIdError;
    NSString * _reservationName;
    NSError * _reservationNameError;
    NSString * _startAddress;
    NSDictionary * _startAddressComponents;
    NSError * _startAddressError;
    NSString * _startDate;
    NSError * _startDateError;
    NSString * _startPlace;
    NSError * _startPlaceError;
}

@property (nonatomic, readonly) bool detectedEventPolarity;
@property (nonatomic, readonly) NSString *endAddress;
@property (nonatomic, readonly) NSDictionary *endAddressComponents;
@property (nonatomic, readonly) NSError *endAddressError;
@property (nonatomic, readonly) NSString *endDate;
@property (nonatomic, readonly) NSError *endDateError;
@property (nonatomic, readonly) NSString *endPlace;
@property (nonatomic, readonly) NSError *endPlaceError;
@property (nonatomic, readonly) NSString *guestName;
@property (nonatomic, readonly) NSError *guestNameError;
@property (nonatomic, readonly) NSString *hotelName;
@property (nonatomic, readonly) NSError *hotelNameError;
@property (nonatomic, readonly) NSString *movieName;
@property (nonatomic, readonly) NSError *movieNameError;
@property (nonatomic, readonly) NSString *reservationId;
@property (nonatomic, readonly) NSError *reservationIdError;
@property (nonatomic, readonly) NSString *reservationName;
@property (nonatomic, readonly) NSError *reservationNameError;
@property (nonatomic, readonly) NSString *startAddress;
@property (nonatomic, readonly) NSDictionary *startAddressComponents;
@property (nonatomic, readonly) NSError *startAddressError;
@property (nonatomic, readonly) NSString *startDate;
@property (nonatomic, readonly) NSError *startDateError;
@property (nonatomic, readonly) NSString *startPlace;
@property (nonatomic, readonly) NSError *startPlaceError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)detectedEventPolarity;
- (void)encodeWithCoder:(id)arg1;
- (id)endAddress;
- (id)endAddressComponents;
- (id)endAddressError;
- (id)endDate;
- (id)endDateError;
- (id)endPlace;
- (id)endPlaceError;
- (id)guestName;
- (id)guestNameError;
- (id)hotelName;
- (id)hotelNameError;
- (id)initWithCoder:(id)arg1;
- (id)initWithFields:(bool)arg1 reservationIdError:(id)arg2 reservationId:(id)arg3 reservationNameError:(id)arg4 reservationName:(id)arg5 startAddressError:(id)arg6 startAddress:(id)arg7 startAddressComponents:(id)arg8 endAddressError:(id)arg9 endAddress:(id)arg10 endAddressComponents:(id)arg11 startPlaceError:(id)arg12 startPlace:(id)arg13 endPlaceError:(id)arg14 endPlace:(id)arg15 startDateError:(id)arg16 startDate:(id)arg17 endDateError:(id)arg18 endDate:(id)arg19 hotelNameError:(id)arg20 hotelName:(id)arg21 guestNameError:(id)arg22 guestName:(id)arg23 movieNameError:(id)arg24 movieName:(id)arg25;
- (id)movieName;
- (id)movieNameError;
- (id)reservationId;
- (id)reservationIdError;
- (id)reservationName;
- (id)reservationNameError;
- (id)startAddress;
- (id)startAddressComponents;
- (id)startAddressError;
- (id)startDate;
- (id)startDateError;
- (id)startPlace;
- (id)startPlaceError;

@end
