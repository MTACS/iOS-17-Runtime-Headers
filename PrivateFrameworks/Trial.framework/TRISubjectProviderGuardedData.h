
@interface TRISubjectProviderGuardedData : NSObject {
    NSDate * nextRotationDate;
    TRISubject * subject;
    NSMutableDictionary * tempDeviceIds;
}

- (void).cxx_destruct;

@end
