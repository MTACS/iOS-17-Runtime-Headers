
@protocol HMDPersonManagerSettings <NSObject, NSCopying, NSSecureCoding>

@required

- (HMHomePersonManagerSettings *)createHMHomePersonManagerSettings;
- (HMIExternalPersonManagerSettings *)createHMIExternalPersonManagerSettings;
- (HMIHomePersonManagerSettings *)createHMIHomePersonManagerSettings;
- (HMPhotosPersonManagerSettings *)createHMPhotosPersonManagerSettings;
- (bool)requiresPersistentStorage;

@end
