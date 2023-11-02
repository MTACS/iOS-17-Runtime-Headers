
@interface _TtC31_AuthenticationServices_SwiftUIP33_A3D59D81812617403D8A44C04D5B775311Coordinator : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    void button;
    void config;
    void presentationAnchor;
}

- (void).cxx_destruct;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)buttonPressed;
- (id)init;
- (id)presentationAnchorForAuthorizationController:(id)arg1;

@end
