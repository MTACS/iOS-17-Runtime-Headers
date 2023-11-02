
@interface FindMyUICore.Repository : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _activeLocationSharingDevice;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _directionsStateByHandle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _followerStateByHandle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _followingStateByHandle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _friendRequestsAllowed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastMessageTimestampByKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _locationStateByHandle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _thisDeviceLastLocation;
    void cancellables;
    void didChangeFollowersLocations;
    void didChangeFollowingFollowerState;
    void didChangeThisDeviceLocation;
    void effectiveBundleAssertion;
    void friendshipRefresherTask;
    void friendshipStreamTask;
    void handlesToGetFriendshipStatus;
    void handlesToGetLocations;
    void isValidatingMessage;
    void locationManager;
    void locationsStreamTask;
    void preferenceChangesTask;
    void session;
    void subscriptionsByKind;
    void subscriptionsBySubscriber;
    void thisDeviceCurrentLocationTask;
}

@end
